//
//  CMSQuotesListSubBaseViewModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import "CMSSelfSelectStockListView.h"
#import "CMSQuotesListDetailTypeModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    CMSQuotesListViewModelTypeStock = 1,
    CMSQuotesListViewModelTypeAHStock,
    CMSQuotesListViewModelTypeBlock,
} CMSQuotesListViewModelType;

@interface CMSQuotesListSubBaseViewModel : NSObject
/// 当前配置
@property (nonatomic, strong) CMSQuotesListDetailTypeModel *typeModel;
/// 数据源
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>>  *stockCellModels;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *currentHeaders;   //当前表头
@property (nonatomic, strong) CMSSelfSelectStockSortInfo *sort;
@property (nonatomic, assign) NSInteger startIndex;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, readonly, assign) CMSQuotesListViewModelType type;
@property (nonatomic, readonly, assign) BOOL isLocalDatas;

+ (Class)getViewModelClassWithType:(NSString *)type;

#pragma mark - 子类需要实现
/// 上下拉刷新接口
/// @param isMore YES:上拉加载更多 NO:下拉刷新数据
- (void)loadDataWithIsMore:(BOOL)isMore endLoadBlock:(nullable void (^)(void))endLoadBlock NS_REQUIRES_SUPER;
/// 定时器刷新部分数据接口
/// @param startIndex 开始角标
- (void)loadPartOfDataFromIndex:(NSInteger)startIndex;
/// 获取对应的小cell
- (NSString *)getCellClassName;
/// 开始排序
- (void)startSort;
#pragma mark - end

#pragma mark - private(子类通用便利方法)
/// 是否需要请求判断(加载本地数据不需要判断)
- (BOOL)isNeedRequest:(BOOL)isMore endLoadBlock:(void (^)(void))endLoadBlock;
// 通用处理上下拉数据回调; (可以子类自行处理)
- (void)dealData:(NSArray *)data isMore:(BOOL)isMore totalNumber:(NSInteger)totalNumber endLoadBlock:(void (^)(void))endLoadBlock;
// 定时器数据回调处理
- (void)dealTimerCallBackData:(NSArray *)data startIndex:(NSInteger)startIndex count:(NSInteger)count;

- (NSArray<NSString *> *)getStingListWithPropertys:(NSArray<CMSStockHeaderModel *> *)propertys;
#pragma mark - end

@end

NS_ASSUME_NONNULL_END
