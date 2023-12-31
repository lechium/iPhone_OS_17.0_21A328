//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface APPBMerchant : PBCodable
{
    CDStruct_95bda58d _paymentCapabilities;	// 8 = 0x8
    CDStruct_95bda58d _supportedPaymentNetworks;	// 32 = 0x20
    NSString *_countryCode;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
    NSData *_paymentProcessingCertificate;	// 72 = 0x48
    NSString *_paymentProcessingURL;	// 80 = 0x50
    NSData *_shippingUpdateCertificate;	// 88 = 0x58
    NSString *_shippingUpdateURL;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000a614f
@property(retain, nonatomic) NSData *shippingUpdateCertificate; // @synthesize shippingUpdateCertificate=_shippingUpdateCertificate;
@property(retain, nonatomic) NSString *shippingUpdateURL; // @synthesize shippingUpdateURL=_shippingUpdateURL;
@property(retain, nonatomic) NSData *paymentProcessingCertificate; // @synthesize paymentProcessingCertificate=_paymentProcessingCertificate;
@property(retain, nonatomic) NSString *paymentProcessingURL; // @synthesize paymentProcessingURL=_paymentProcessingURL;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a5edb
- (unsigned long long)hash;	// IMP=0x00100000000a5df0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a5c53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5ae7
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a591c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a57b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a57ac
- (id)dictionaryRepresentation;	// IMP=0x00100000000a4ff0
- (id)description;	// IMP=0x00100000000a4f41
@property(readonly, nonatomic) _Bool hasShippingUpdateCertificate;
@property(readonly, nonatomic) _Bool hasShippingUpdateURL;
@property(readonly, nonatomic) _Bool hasPaymentProcessingCertificate;
- (int)StringAsPaymentCapabilities:(id)arg1;	// IMP=0x00100000000a4e9d
- (id)paymentCapabilitiesAsString:(int)arg1;	// IMP=0x00100000000a4e48
- (void)setPaymentCapabilities:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00100000000a4e31
- (int)paymentCapabilitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a4d61
- (void)addPaymentCapabilities:(int)arg1;	// IMP=0x00100000000a4d4e
- (void)clearPaymentCapabilities;	// IMP=0x00100000000a4d3d
@property(readonly, nonatomic) int *paymentCapabilities;
@property(readonly, nonatomic) unsigned long long paymentCapabilitiesCount;
- (int)StringAsSupportedPaymentNetworks:(id)arg1;	// IMP=0x00100000000a4c66
- (id)supportedPaymentNetworksAsString:(int)arg1;	// IMP=0x00100000000a4c1d
- (void)setSupportedPaymentNetworks:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00100000000a4c06
- (int)supportedPaymentNetworksAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a4b36
- (void)addSupportedPaymentNetworks:(int)arg1;	// IMP=0x00100000000a4b23
- (void)clearSupportedPaymentNetworks;	// IMP=0x00100000000a4b12
@property(readonly, nonatomic) int *supportedPaymentNetworks;
@property(readonly, nonatomic) unsigned long long supportedPaymentNetworksCount;
- (void)dealloc;	// IMP=0x00100000000a4aa0

@end

