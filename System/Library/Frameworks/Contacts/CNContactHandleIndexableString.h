//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

__attribute__((visibility("hidden")))
@interface CNContactHandleIndexableString : NSObject
{
    NSString *_indexKey;	// 8 = 0x8
    NSString *_stringValue;	// 16 = 0x10
    id <_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001113cd
+ (id)equivalenceStrategyWithString:(id)arg1;	// IMP=0x0010000000111187
+ (id)phoneNumberIndexKey:(id)arg1;	// IMP=0x0010000000110fcd
+ (id)emailIndexKey:(id)arg1;	// IMP=0x0010000000110fb4
- (void).cxx_destruct;	// IMP=0x00000000001114b9
@property(readonly, nonatomic) id <_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy; // @synthesize equivalenceStrategy=_equivalenceStrategy;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) NSString *indexKey; // @synthesize indexKey=_indexKey;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;	// IMP=0x0000000000111485
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000111462
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001113d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001113c2
- (unsigned long long)hash;	// IMP=0x0000000000111367
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001112d3
- (id)description;	// IMP=0x0000000000111213
- (id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3;	// IMP=0x0000000000111094
- (id)initWithString:(id)arg1;	// IMP=0x0000000000110fe6

@end
