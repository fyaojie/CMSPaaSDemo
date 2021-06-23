//
//  UIView+CMSTheme.h
//  CMSPaaS
//
//  Created by symbio on 2021/6/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CMSTheme)
/// 开启皮肤
@property (nonatomic, assign) BOOL useTheme;

/// 获取原始类的imp
- (IMP)getOriginClassSel:(SEL)sel;
@end

NS_ASSUME_NONNULL_END
