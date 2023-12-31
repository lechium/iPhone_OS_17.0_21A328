//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharingChannelEndpoint
{
}

+ (id)_propertySettersForRelayChannelEndpoint;	// IMP=0x00400000003270ed
+ (id)_properties;	// IMP=0x0010000000326ff1
+ (id)_predicateForHasOutstandingMessages;	// IMP=0x0010000000326fca
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x0010000000326f94
+ (id)_predicateForSharingTransportIdentifier:(id)arg1;	// IMP=0x0010000000326f71
+ (_Bool)deleteEndpointForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000326d0f
+ (_Bool)deleteEndpoint:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000326c92
+ (id)_endpointForProperties:(id)arg1 values:(const id *)arg2;	// IMP=0x0010000000326ba4
+ (id)endpointsWithOutstandingMessagesInDatabase:(id)arg1;	// IMP=0x0010000000326a02
+ (id)endpointsInDatabase:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x001000000032685e
+ (id)endpointsInDatabase:(id)arg1;	// IMP=0x00100000003266f8
+ (id)sharingEndpointForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000326503
+ (_Bool)insert:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000326467
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000326344
+ (id)databaseTable;	// IMP=0x00100000003262c9
- (id)relayChannelEndpoint;	// IMP=0x0040000000326edd
- (_Bool)deleteFromDatabase;	// IMP=0x00100000003262d6
- (id)initWithSharingChannelEndpoint:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000325f05

@end

