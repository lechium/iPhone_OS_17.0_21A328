//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDInstallConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000058c83
+ (id)requiredEntitlements;	// IMP=0x0010000000058c6b
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000058c39
+ (id)_intersectionAliasToFeatures;	// IMP=0x001000000005ae60
- (unsigned long long)queueGroup;	// IMP=0x0010000000058c78
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x001000000005af16
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005acf6
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000059c35
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059932
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000596c7
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059337
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000058dad

@end

