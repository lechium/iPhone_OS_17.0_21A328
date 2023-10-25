//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingSelectionItem : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005a51bc
- (void).cxx_destruct;	// IMP=0x00000000005a5194
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005a50be
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005a4ff4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a4fe9
- (id)description;	// IMP=0x00000000005a4f2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a4e54
- (unsigned long long)hash;	// IMP=0x00000000005a4e10
- (id)initWithTitle:(id)arg1;	// IMP=0x00000000005a4d42

@end
