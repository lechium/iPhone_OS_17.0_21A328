//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RouteCollection;
@protocol RouteCollectionUpdateProviderDelegate;

@protocol RouteCollectionUpdateProvider <NSObject>
@property(readonly, nonatomic) RouteCollection *currentRouteCollection;
- (void)setDelegate:(id <RouteCollectionUpdateProviderDelegate>)arg1;
@end
