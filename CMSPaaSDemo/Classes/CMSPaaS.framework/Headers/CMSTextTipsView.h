//
//  CMSTextTipsView.h
//  CMSPaaS
//
//  Created by sway on 2021/1/4.
//

#import <UIKit/UIKit.h>


typedef void(^CMSTextTipsViewClickedBlock)(void);

@interface CMSTextTipsView : UIView
@property (nonatomic ,strong) UILabel   *titleLabel;
@property (nonatomic ,strong) UIButton  *rightBtn;
@property (nonatomic, copy) CMSTextTipsViewClickedBlock clickedBlock;

- (void)setRightButtonTitle:(NSString *)title;
@end


