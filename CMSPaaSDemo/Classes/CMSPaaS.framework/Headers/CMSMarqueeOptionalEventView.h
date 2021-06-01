//
//  CMSMarqueeOptionalEventView.h
//  CMSPaaS
//
//  Created by SJ on 2020/12/17.
//

#import <UIKit/UIKit.h>
#import "CMSMarqueeOptionalEventModel.h"
NS_ASSUME_NONNULL_BEGIN


@interface CMSMarqueeOptionalEventView : UIView

@property (nonatomic, copy) NSArray<CMSMarqueeOptionalEventModel *> *marqueeEventsData;

@property (nonatomic, assign) BOOL isAutoScroll;

@end

NS_ASSUME_NONNULL_END
