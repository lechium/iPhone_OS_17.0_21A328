//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class HCServer;

@protocol AXHeardServerDelegate <NSObject>

@optional
- (void)hearingServerIsReady;
- (void)hearingServerDidDie:(HCServer *)arg1;
@end

