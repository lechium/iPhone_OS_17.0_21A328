//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC8Freeform20CRLiOSValueTextField17CRLFormatDelegate : NSObject
{
    MISSING_TYPE *format;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000c1bcc0
- (id)init;	// IMP=0x0010000000c1bbf0
@property(nonatomic, readonly) _Bool valueTextFieldShouldEnforceRightToLeftTextDirection;
- (_Bool)valueTextField:(id)arg1 isValidNumericString:(id)arg2;	// IMP=0x0010000000c1b9c0
- (void)valueTextField:(id)arg1 textDidChangeToString:(id)arg2;	// IMP=0x0010000000c1b8c0
- (double)valueTextFieldParsedValueForString:(id)arg1;	// IMP=0x0010000000c1b7a0
- (id)valueTextFieldFormattedTextForValue:(double)arg1 numericRange:(struct _NSRange *)arg2;	// IMP=0x0010000000c1b6d0

@end
