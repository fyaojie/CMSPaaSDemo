//
//  CMSSelfSelectGroupDropContentView.h
//  CMSPaaS
//
//  Created by liuyanliang on 2020/11/16.
//

#import <UIKit/UIKit.h>
#import "CMSSelfSelectGroupProtocol.h"
#import "CMSBaseButton.h"

@interface CMSSelfSelectGroupDropContentView : UIView

@property (nonatomic, copy) void (^groupSelectedBlock)(NSInteger index);
//@property (nonatomic, strong) UIButton *createGroupButton;
//@property (nonatomic, strong) UIButton *manageGroupButton;
@property (nonatomic, strong) CMSBaseButton *createGroupButton;
@property (nonatomic, strong) CMSBaseButton *manageGroupButton;

- (instancetype)initWithFrame:(CGRect)frame items:(NSArray<id<CMSSelfSelectGroupProtocol>> *)items selectedIndex:(NSInteger)selectedIndex;

@end

