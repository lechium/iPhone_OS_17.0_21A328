//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFBoolean
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000000659c7
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000065907
- (long long)compare:(id)arg1;	// IMP=0x0000000000065db4
- (long long)_reverseCompare:(id)arg1;	// IMP=0x0000000000065d88
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x0000000000065c8c
- (long long)_cfNumberType;	// IMP=0x0000000000065b74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000065b67
- (const char *)objCType;	// IMP=0x0000000000065b5f
- (void)getValue:(void *)arg1;	// IMP=0x0000000000065b45
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000065b40
- (_Bool)boolValue;	// IMP=0x0000000000065b30
- (unsigned long long)unsignedIntegerValue;	// IMP=0x0000000000065b23
- (long long)integerValue;	// IMP=0x0000000000065b16
- (double)doubleValue;	// IMP=0x0000000000065afa
- (float)floatValue;	// IMP=0x0000000000065ade
- (unsigned long long)unsignedLongLongValue;	// IMP=0x0000000000065ac9
- (long long)longLongValue;	// IMP=0x0000000000065ab4
- (unsigned long long)unsignedLongValue;	// IMP=0x0000000000065a9f
- (long long)longValue;	// IMP=0x0000000000065a8a
- (unsigned int)unsignedIntValue;	// IMP=0x0000000000065a76
- (int)intValue;	// IMP=0x0000000000065a62
- (unsigned short)unsignedShortValue;	// IMP=0x0000000000065a4e
- (short)shortValue;	// IMP=0x0000000000065a3a
- (unsigned char)unsignedCharValue;	// IMP=0x0000000000065a26
- (BOOL)charValue;	// IMP=0x0000000000065a12
- (id)stringValue;	// IMP=0x0000000000065a03
- (id)description;	// IMP=0x00000000000659f4
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x00000000000659ca
- (unsigned long long)retainCount;	// IMP=0x00000000000659c2
- (_Bool)_isDeallocating;	// IMP=0x00000000000659b2
- (_Bool)_tryRetain;	// IMP=0x00000000000659a1
- (oneway void)release;	// IMP=0x0000000000065997
- (id)retain;	// IMP=0x000000000006598a
- (unsigned long long)hash;	// IMP=0x0000000000065985
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000065940
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x000000000006591f

@end
