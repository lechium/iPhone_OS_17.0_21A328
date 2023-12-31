//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPCMusicPlaybackIntentDataSource : NSObject
{
}

- (void)getRepresentativeObjectFromIntent:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027917a
- (void)getRemotePlaybackQueueFromIntent:(id)arg1 destination:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002790a0
- (void)getArchiveFromIntent:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000278f33
- (void)_getPlaybackContextForIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000278e1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

