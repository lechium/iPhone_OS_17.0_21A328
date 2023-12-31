//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NDSpringBoardAppObserver <NSObject>
- (void)applicationNoLongerInForeground:(NSString *)arg1;
- (void)applicationEnteredForeground:(NSString *)arg1;
- (void)applicationWasSuspended:(NSString *)arg1 pid:(int)arg2;
- (void)applicationBackgroundUpdatesTurnedOn:(NSString *)arg1;
- (void)applicationBackgroundUpdatesTurnedOff:(NSString *)arg1;
- (void)applicationWasQuitFromAppSwitcher:(NSString *)arg1;
@end

