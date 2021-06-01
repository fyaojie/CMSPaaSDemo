//
//  CMSStockQuotesBinder.h
//  CMSPaaS
//
//  Created by sway on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"


@interface CMSStockQuotesBinder : NSObject
+ (instancetype)dataBinderWithStock:(id<CMSStockProtocol>)stock success:(void(^)(void))success;
//updateWhenBind 可指定是否需要拉取一遍数据
+ (instancetype)dataBinderWithStock:(id<CMSStockProtocol>)stock updateWhenBind:(BOOL)updateWhenBind success:(void(^)(void))success;

@end


