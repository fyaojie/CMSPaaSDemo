//
//  CMSQuotesDataGuideViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellViewModel.h"
#import "CMSQuotesDataGuideModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesDataGuideViewModel : CMSQuotesCellViewModel
/// 新股新债数据
@property (nonatomic, strong) NSDictionary<NSString *,NSString *>   *stockAndDabtNums;
///// 加载新股新债数据
//- (void)loadStockNumberAndDabtNumberData;

@property (nonatomic, strong) CMSQuotesDataGuideModel *dataGuideModel;

/// 当前标题
@property (nonatomic, strong, readonly) NSString *title;

@end

NS_ASSUME_NONNULL_END

