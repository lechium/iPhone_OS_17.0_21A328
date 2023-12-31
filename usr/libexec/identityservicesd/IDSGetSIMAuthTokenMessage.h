//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSNumber, NSString;

@interface IDSGetSIMAuthTokenMessage : FTIDSMessage
{
    NSString *_protocolVersion;	// 232 = 0xe8
    NSString *_hardwareVersion;	// 240 = 0xf0
    NSString *_osVersion;	// 248 = 0xf8
    NSString *_softwareVersion;	// 256 = 0x100
    NSString *_carrierNonce;	// 264 = 0x108
    NSString *_IMEI;	// 272 = 0x110
    NSNumber *_responseStatus;	// 280 = 0x118
    NSString *_responseCarrierToken;	// 288 = 0x120
    NSString *_responseMessage;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00200000004316ff
@property(copy, nonatomic) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy, nonatomic) NSString *responseCarrierToken; // @synthesize responseCarrierToken=_responseCarrierToken;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(copy, nonatomic) NSString *carrierNonce; // @synthesize carrierNonce=_carrierNonce;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000004314e5
- (_Bool)isMultipleAuthCertCapable;	// IMP=0x00100000004314dd
- (id)bagKey;	// IMP=0x00100000004314d0
- (id)requiredKeys;	// IMP=0x00100000004314b7
- (id)messageBody;	// IMP=0x0010000000431258
- (id)additionalMessageHeaders;	// IMP=0x0010000000431150
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000430f5d

@end

