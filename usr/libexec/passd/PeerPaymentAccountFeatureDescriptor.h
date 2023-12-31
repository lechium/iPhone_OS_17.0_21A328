//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentAccountFeatureDescriptor
{
}

+ (id)_propertySettersForPeerPaymentAccountFeatureDescriptor;	// IMP=0x00400000004256db
+ (id)_peerPaymentAccountFeatureDescriptorsWithQuery:(id)arg1;	// IMP=0x0010000000425522
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x0010000000425342
+ (id)featureDescriptorsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000424bf6
+ (void)deleteFeatureDescriptorsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000424b5d
+ (id)insertFeatureDescriptors:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000424938
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000424909
+ (id)databaseTable;	// IMP=0x00100000004248fc
- (id)peerPaymentAccountFeatureDescriptor;	// IMP=0x00400000004253b3
- (id)initWithFeatureDescriptor:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000424ca9

@end

