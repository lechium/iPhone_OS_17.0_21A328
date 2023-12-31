//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerEncodingThread : HAP2LoggingObject
{
    unsigned long long _encodingFeatures;	// 8 = 0x8
    NSString *_accessoryDescription;	// 16 = 0x10
}

+ (id)_parseShortFormUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000052a0c
- (void).cxx_destruct;	// IMP=0x000000000004daf6
@property(readonly, nonatomic) unsigned long long encodingFeatures; // @synthesize encodingFeatures=_encodingFeatures;
@property(readonly, copy) NSString *description;
- (id)_parseTopLevelAttributeDatabaseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d745
- (id)_parseServiceList:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d4e9
- (id)_parseCharacteristics:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d28d
- (id)_parseCharacteristicMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004cb98
- (id)eventsForData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c460
- (id)requestToListPairingsWithCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c2e8
- (id)requestToAddPairing:(id)arg1 characteristic:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004c16a
- (id)requestToRemovePairing:(id)arg1 characteristic:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004bfc2
- (id)unpairedIdentifyRequestWithError:(id *)arg1;	// IMP=0x000000000004bf94
- (id)responseForRequest:(id)arg1 bodyData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004b29b
- (id)_parseCharacteristicResponsesWithBodyData:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004ab27
- (id)notificationRequestsForCharacteristics:(id)arg1 type:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004a808
- (id)executeWriteRequestForCharacteristics:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a632
- (id)prepareWriteRequestForCharacteristics:(id)arg1 ttl:(double)arg2 error:(id *)arg3;	// IMP=0x000000000004a45c
- (id)writeRequestForCharacteristics:(id)arg1 shouldEncrypt:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000004a20e
- (id)groupingsForWriteRequestsForCharacteristics:(id)arg1;	// IMP=0x0000000000049f9e
- (id)readRequestForCharacteristics:(id)arg1 shouldEncrypt:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000049e04
- (id)groupingsForReadRequestsForCharacteristics:(id)arg1;	// IMP=0x0000000000049cb3
- (id)readRequestForAttributeDatabaseWithEncryption:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000049c25
- (id)decodeBodyData:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000049b38
- (id)encodeBodyValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000049aa8
- (id)initWithEncodingFeatures:(unsigned long long)arg1 accessoryDescription:(id)arg2;	// IMP=0x0000000000049a28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

