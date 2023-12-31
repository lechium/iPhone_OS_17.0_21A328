//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDISO18013Manager;

@interface PDARRISO18013SignatureProvider : NSObject
{
    PDISO18013Manager *_isoManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013bc98
- (id)associatedRequirementsForRequirement:(id)arg1 context:(id)arg2;	// IMP=0x001000000013bc06
- (_Bool)requiresNFSESessionForOperation:(unsigned long long)arg1;	// IMP=0x001000000013bbfe
- (void)requirementRegistrationSuccess:(id)arg1 serverKeyMaterial:(id)arg2 forRequirement:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000013bbed
- (void)requirementRegistrationFailed:(id)arg1 forRequirement:(id)arg2 context:(id)arg3;	// IMP=0x001000000013bbe7
- (void)isRegisteredForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013bbd4
- (void)generateKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013bbc0
- (id)initWithISO18013Manager:(id)arg1;	// IMP=0x001000000013bb55
- (id)init;	// IMP=0x001000000013bb47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

