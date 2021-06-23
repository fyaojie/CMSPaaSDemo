//
//  CMSBaseQuoteCell.h
//  CMSPaaS
//
//  Created by HJ on 2021/1/7.
//

#import <UIKit/UIKit.h>
#import "CMSQuoteSectionTitleView+CMSThemeQuoteSectionTitleView.h"
#import <Masonry/Masonry.h>
#import <YYModel/YYModel.h>
#import "UIView+CMSLayout.h"
#import "CMSThemeManager.h"
//#import "CMSQuotesCellViewModel.h"
#import "CMSQuotesViewModel.h"
#import "EXTScope.h"
#import <KVOController/KVOController.h>

#import "CMSUITemplateManager.h"
#import "CMSQuotesMainProtocol.h"
#import "CMSServicesManager.h"
#import "UITableView+CMSLifeCycleExchange.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSBaseQuoteCell : UITableViewCell <CMSComponentCellConfig, CMSTableViewCellLifeCycleProtocol>
@property (nonatomic, strong) CMSQuoteSectionTitleView *sectionTitleView;
@property (nonatomic, weak) UITableView *cellSuperViewTableView;
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, strong) NSDictionary *style;
@property (nonatomic, strong) CMSQuotesCellViewModel *viewModel;

//@property (nonatomic, strong) UIView *line;


/// 空的初始化方法
- (void)setInitViewUI;
/// 需要调用 添加 sectionTitleView
- (void)setHeaderViewUI;
- (void)cellWillDisplay;
- (void)cellDidEndDisplay;
/// 设置标题顶部的数据,默认是直接设置的,如无需设置,重新该方法为空实现
- (void)setSectionTitleViewData;
/// reload cell
- (void)tableviewReloadCell;
/// 点击更多的按钮处理
- (void)clickMoreButton;
/// servers openuri
- (void)openURI:(NSString *)uri;
/// template 协议方法
- (void)CMSComponentCellConfigWithStyle:(NSDictionary *)style data:(CMSQuotesCellViewModel *)data;
@end

NS_ASSUME_NONNULL_END
