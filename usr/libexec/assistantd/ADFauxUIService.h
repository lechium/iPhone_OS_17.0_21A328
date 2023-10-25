//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADFauxUIService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000025081a
- (void)_unhandledCommand:(id)arg1 error:(id)arg2 forDomain:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000250787
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025076d
- (void)_appPunchOutHandler:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025075b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000025052d
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000250525
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000025049e
- (id)domains;	// IMP=0x0010000000250434
- (id)handle;	// IMP=0x001000000025042b
- (id)init;	// IMP=0x0010000000250367

@end
