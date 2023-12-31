//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface IDSAttachmentEncryptionParameter : NSObject
{
    unsigned long long _encryptionType;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSData *_dataToEncrypt;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    NSArray *_endpoints;	// 40 = 0x28
    NSDictionary *_endpointsToEncryptedData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000398a2c
@property(retain, nonatomic) NSDictionary *endpointsToEncryptedData; // @synthesize endpointsToEncryptedData=_endpointsToEncryptedData;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;

@end

