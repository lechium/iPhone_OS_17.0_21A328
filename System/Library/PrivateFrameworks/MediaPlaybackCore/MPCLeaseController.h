//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;
@protocol MFPlaybackStackController;

__attribute__((visibility("hidden")))
@interface MPCLeaseController : NSObject
{
    id <MFPlaybackStackController> _stackController;	// 8 = 0x8
    MPCMediaFoundationTranslator *_translator;	// 16 = 0x10
    _MPCLeaseManager *_leaseManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ca494
@property(readonly, nonatomic) _MPCLeaseManager *leaseManager; // @synthesize leaseManager=_leaseManager;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(nonatomic) __weak id <MFPlaybackStackController> stackController; // @synthesize stackController=_stackController;
- (void)relinquishLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ca16a
- (void)requestLeaseForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c9e4d
- (id)initWithTranslator:(id)arg1 leaseManager:(id)arg2;	// IMP=0x00000000002c9db4

@end

