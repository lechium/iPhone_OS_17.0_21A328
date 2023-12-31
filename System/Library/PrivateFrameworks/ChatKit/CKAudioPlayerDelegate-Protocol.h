//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAudioPlayer;

@protocol CKAudioPlayerDelegate <NSObject>
- (void)audioPlayerDidGetInterrupted;
- (void)audioPlayerCurrentTimeDidChange:(CKAudioPlayer *)arg1;

@optional
- (void)audioPlayerDidPrepareAudioToPlay:(CKAudioPlayer *)arg1 successfully:(_Bool)arg2;
@end

