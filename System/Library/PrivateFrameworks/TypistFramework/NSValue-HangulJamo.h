//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (HangulJamo)
+ (id)hangulJamoTransformationDataValueWithJamoType:(int)arg1 direction:(int)arg2;	// IMP=0x002000000002faa6
+ (id)valueWithHangulJamoTransformationData:(CDStruct_1ef3fb1f)arg1;	// IMP=0x002000000002fa40
+ (id)valueWithTYArabicCharacter:(CDStruct_8abe0896)arg1;	// IMP=0x0020000000032156
@property(readonly) CDStruct_1ef3fb1f hangulJamoTransformationDataValue;
- (CDStruct_8abe0896)arabicCharacterValue;	// IMP=0x00100000000321b1
@end

