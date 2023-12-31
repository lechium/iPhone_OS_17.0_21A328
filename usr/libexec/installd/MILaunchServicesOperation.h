//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface MILaunchServicesOperation : NSObject
{
    NSUUID *_operationUUID;	// 8 = 0x8
    unsigned long long _serialNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000d874
- (void).cxx_destruct;	// IMP=0x002000000000dcdc
@property(readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (id)description;	// IMP=0x001000000000dc19
- (unsigned long long)hash;	// IMP=0x001000000000dbb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000daa8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000d9e3
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000d87c
- (id)initWithOperationUUID:(id)arg1 serialNumber:(unsigned long long)arg2;	// IMP=0x001000000000d7fd

@end

