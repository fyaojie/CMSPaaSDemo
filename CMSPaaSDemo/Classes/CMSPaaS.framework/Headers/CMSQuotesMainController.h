//
//  CMSQuotesMainController.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesMainController : UIViewController
/// 页面选中的回调，tabName格式为 页面标题-tab标题
@property (nonatomic, copy) void(^selectedTabBlock)(NSString *tabName);

/// 根据标题切换到对应的页面/Tab
- (void)switchToPageOfName:(NSString *)pageName;

@end

NS_ASSUME_NONNULL_END
