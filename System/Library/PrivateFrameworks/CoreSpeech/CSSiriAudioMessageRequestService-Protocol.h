//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSString;

@protocol CSSiriAudioMessageRequestService <NSObject>
- (oneway void)forceReleaseAllAudioMessageRetainLock;
- (oneway void)releaseAudioMessageRetainLockFromRequestId:(NSString *)arg1;
- (oneway void)getAudioFileWithRequestId:(NSString *)arg1 completion:(void (^)(NSURL *))arg2;
@end

