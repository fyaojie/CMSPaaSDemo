//
//  CMSBaseButton.h
//  CMSPaaS
//
//  Created by SJ on 2021/6/4.
//

#import <UIKit/UIKit.h>
#import "UIButton+CMSLayout.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    CMSBaseButtonTypeMainRed,       //主按钮红色
    CMSBaseButtonTypeMainGolden,    //主按钮金色
    CMSBaseButtonTypeMainBlue,      //主按钮蓝色
    CMSBaseButtonTypeSecond,        //次按钮
    CMSBaseButtonTypeIcon,          //图标文字按钮
    CMSBaseButtonTypeTabRed,        //二级tab选中红
    CMSBaseButtonTypeTabBlack,      //二级tab选中黑
}CMSBaseButtonType;

@interface CMSBaseButton : UIButton

@property (nonatomic, assign) CMSBaseButtonType type;   //按钮类型，需最先设置
@property (nonatomic, assign) CMSButtonEdgeInsetsStyle locationStyle;   //图片与文字的位置关系
@property (nonatomic, copy) NSString *title;            //按钮文字
@property (nonatomic, strong) UIImage *image;           //按钮图片
@property (nonatomic, assign) CGFloat imageTitleSpace;  //图片与文字的间距，默认8

- (void)cms_updateEdgeInsets;

@end

NS_ASSUME_NONNULL_END
