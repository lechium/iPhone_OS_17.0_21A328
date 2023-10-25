//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PDBarcodeServiceConnectionTask
{
    NSURL *_barcodeServiceURL;	// 8 = 0x8
    NSString *_passUniqueIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000183648
- (void).cxx_destruct;	// IMP=0x002000000018449f
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(copy, nonatomic) NSURL *barcodeServiceURL; // @synthesize barcodeServiceURL=_barcodeServiceURL;
- (_Bool)isValid;	// IMP=0x0010000000184446
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x001000000018428f
- (id)request;	// IMP=0x00100000001838c4
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x00100000001838b4
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x00100000001838a7
- (id)bodyDictionary;	// IMP=0x001000000018389f
- (id)headerFields;	// IMP=0x00100000001837f6
- (id)queryFields;	// IMP=0x00100000001837ee
- (id)endpointComponents;	// IMP=0x00100000001837e6
- (id)method;	// IMP=0x00100000001837de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000018373f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000183650

@end
