//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADServiceCommandType : NSObject
{
    NSString *_domainName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
}

+ (id)domainObjectCommitTypeForDomainNamed:(id)arg1;	// IMP=0x004000000011d0af
+ (id)domainObjectCancelTypeForDomainNamed:(id)arg1;	// IMP=0x001000000011d093
+ (id)domainObjectDeleteTypeForDomainNamed:(id)arg1;	// IMP=0x001000000011d077
+ (id)domainObjectUpdateTypeForDomainNamed:(id)arg1;	// IMP=0x001000000011d05b
+ (id)domainObjectRetrieveTypeForDomainNamed:(id)arg1;	// IMP=0x001000000011d03f
+ (id)domainObjectCreateTypeForDomainNamed:(id)arg1;	// IMP=0x001000000011d023
+ (id)_serviceCommandTypeWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x001000000011cfb5
- (void).cxx_destruct;	// IMP=0x002000000011cf8d
- (unsigned long long)hash;	// IMP=0x001000000011cf4e
- (_Bool)isEqualToServiceCommandType:(id)arg1;	// IMP=0x001000000011ce8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011ce32
- (id)description;	// IMP=0x001000000011cdaa
- (id)qualifiedCommandName;	// IMP=0x001000000011cd41
- (id)className;	// IMP=0x001000000011cd33
- (id)domainName;	// IMP=0x001000000011cd25
- (id)initWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x001000000011cc6c

@end

