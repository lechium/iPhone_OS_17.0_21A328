//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject
{
    MISSING_TYPE *remoteObservers;	// 8 = 0x8
    MISSING_TYPE *receiver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005480b
- (id)init;	// IMP=0x00000000000547d8
- (void)xpcSetAudioConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005473e
- (void)xpcRemoveAllRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000546aa
- (void)xpcRemoveRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000545ee
- (void)xpcAddRequest:(id)arg1 withObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005450b
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x00000000000542dd
- (void)removeAllRequests;	// IMP=0x00000000000540c6
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000053e95
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000053b80

@end

