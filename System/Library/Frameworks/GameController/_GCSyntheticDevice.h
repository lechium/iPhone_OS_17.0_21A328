//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCSyntheticDevice : NSObject
{
    unsigned int _serviceIdentity;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    id <NSCopying><NSObject><NSSecureCoding> _controllerIdentifier;	// 24 = 0x18
    NSString *_persistentIdentifier;	// 32 = 0x20
}

+ (id)devicePropertiesWithDescription:(id)arg1;	// IMP=0x006000000002b578
- (void).cxx_destruct;	// IMP=0x000000000002b7fa
- (id)debugDescription;	// IMP=0x000000000002b757
- (id)description;	// IMP=0x000000000002b71d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b613
- (unsigned long long)hash;	// IMP=0x000000000002b5fd
- (void)dealloc;	// IMP=0x000000000002b5bb
- (id)init;	// IMP=0x000000000002b590

@end

