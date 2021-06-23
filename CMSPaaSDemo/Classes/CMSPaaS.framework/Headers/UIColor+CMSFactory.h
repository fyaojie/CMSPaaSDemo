//
//  UIColor+Extension.h
//  cmsmobilesecurities
//
//  Created by huzj on 15/3/23.
//  Copyright (c) 2015年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>


#define COLOR(r, g, b)                                COLORA(r, g, b, 1)
#define COLORA(r, g, b, a)                             ([UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:a])

#define HEXCOLOR(hexValue)              HEXACOLOR(hexValue, 1.0)
#define HEXACOLOR(hexValue, alphaValue) [UIColor colorWithRed : ((CGFloat)((hexValue & 0xFF0000) >> 16)) / 255.0 green : ((CGFloat)((hexValue & 0xFF00) >> 8)) / 255.0 blue : ((CGFloat)(hexValue & 0xFF)) / 255.0 alpha : (alphaValue)]


@interface UIColor(CMSFactory)

+ (UIColor *)cms_randomColor;
+ (UIColor *)cms_colorFromHexString:(NSString *)hexString;
+ (UIColor *)cms_colorFromHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/// 透明
+ (NSString *)cms_systemClear;

#pragma mark  - 主题颜色
/// 主功能色
+ (NSString *)cms_mainFunction;
/// 次功能色 链接文案
+ (NSString *)cms_linkText;
/// 跌绿
+ (NSString *)cms_stockDown;
///// 中性蓝
//+ (NSString *)cms_midBlue;
/// 背景色
+ (NSString *)cms_background;
#pragma mark  - 辅助颜色
/// 分割线
+ (NSString *)cms_separateLine;
/// 分割块 通知条
+ (NSString *)cms_splitBlock;
/// 金色通知条
+ (NSString *)cms_goldenNote;
/// 输入框边框
+ (NSString *)cms_inputBorder;

#pragma mark  - Toast颜色
/// 背景色
+ (NSString *)cms_toastBackground;
/// 文字内容
+ (NSString *)cms_toastText;
#pragma mark  - 标签颜色
/// 红色
+ (NSString *)cms_tagRed;
/// 金色
+ (NSString *)cms_tagGolden;
/// 蓝色
+ (NSString *)cms_tagBlue;
/// 灰色
+ (NSString *)cms_tagGray;
/// 浅灰/深灰
+ (NSString *)cms_tagLightGray;
/// 标签文字
+ (NSString *)cms_tagWhite;

#pragma mark  - 按钮颜色
/// 主按钮可点击
+ (NSString *)cms_mainButtonEnable;
/// 主按钮不可点击
+ (NSString *)cms_mainButtonDisable;

/// 次按钮可点击
+ (NSString *)cms_secondButtonEnable;
/// 次按钮不可点击
+ (NSString *)cms_secondButtonDisable;

/// 金色按钮可点击
+ (NSString *)cms_goldenButtonEnable;
/// 金色按钮不可点击
+ (NSString *)cms_goldenButtonDisable;

/// 蓝色按钮可点击
+ (NSString *)cms_blueButtonEnable;
/// 蓝色按钮不可点击
+ (NSString *)cms_blueButtonDisable;
#pragma mark  - Tab颜色

/// Tab选中
+ (NSString *)cms_tabSelect;
/// Tab未选中
+ (NSString *)cms_tabNormal;

#pragma mark  - 文字颜色

/// 主文案
+ (NSString *)cms_mainText;
/// 内容文字
+ (NSString *)cms_contentText;
/// 次要文字
+ (NSString *)cms_secondText;
/// 辅助说明文字
+ (NSString *)cms_supplementText;
/// 棕色文字  ???
+ (NSString *)cms_brownText;

#pragma mark  - 涨跌背景色

/// 指数板块上涨颜色
+ (NSString *)cms_indexBlockUp;
/// 指数板块下跌颜色
+ (NSString *)cms_indexBlockDown;
/// 指数板块持平颜色
+ (NSString *)cms_indexBlockFlat;

/// 股票列表分隔阴影
+ (NSString *)cms_stockListShadow;

/// 股市有招tips背景
+ (NSString *)cms_textTipsBackground;

/// 股市有招tips"一键打新"文字颜色
+ (NSString *)cms_textTips;

/// 闪烁上涨颜色
+ (NSString *)cms_twinklingUp;
/// 闪烁下跌颜色
+ (NSString *)cms_twinklingDown;

/// 今日热门背景
+ (NSString *)cms_lightGoldenBlock;

/// 行情地图背景
+ (NSString *)cms_mapBackground;

/// 行情地图背景边框
+ (NSString *)cms_mapBackgroundBorder;
@end
