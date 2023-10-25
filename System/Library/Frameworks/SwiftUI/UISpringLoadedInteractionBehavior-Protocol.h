//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/NSObject-Protocol.h>

@class UISpringLoadedInteraction;
@protocol UISpringLoadedInteractionContext;

@protocol UISpringLoadedInteractionBehavior <NSObject>
- (_Bool)shouldAllowInteraction:(UISpringLoadedInteraction *)arg1 withContext:(id <UISpringLoadedInteractionContext>)arg2;

@optional
- (void)interactionDidFinish:(UISpringLoadedInteraction *)arg1;
@end
