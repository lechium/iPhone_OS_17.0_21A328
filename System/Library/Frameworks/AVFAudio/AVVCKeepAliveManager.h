//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVVCKeepAliveManager : NSObject
{
    struct AVVCKeepAliveImpl *_impl;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *mKeepAliveDispatchQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00600000000b986f
- (void).cxx_destruct;	// IMP=0x00000000000b9679
- (void)dealloc;	// IMP=0x00000000000b9577
- (void)destroyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b94d9
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b943b
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b93b0
- (void)createWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9313
- (id)getDispatchQueue;	// IMP=0x00000000000b9305
- (id)init;	// IMP=0x00000000000b9155

@end

