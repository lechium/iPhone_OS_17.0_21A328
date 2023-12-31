//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSConnectedDisplayInfo;

@protocol SBSExternalDisplayServiceObserver <NSObject>

@optional
- (void)externalDisplayDidUpdateProperties:(SBSConnectedDisplayInfo *)arg1;
- (void)externalDisplayWillDisconnect:(SBSConnectedDisplayInfo *)arg1;
- (void)externalDisplayDidConnect:(SBSConnectedDisplayInfo *)arg1;
@end

