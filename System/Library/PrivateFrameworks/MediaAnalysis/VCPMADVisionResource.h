//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class NSObject, VNSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVisionResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VNSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000274ba3
- (void)purge;	// IMP=0x0000000000274b11
@property(readonly, nonatomic) VNSession *session;
- (id)init;	// IMP=0x0000000000274865

@end

