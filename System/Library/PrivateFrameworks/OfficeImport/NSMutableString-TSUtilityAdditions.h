//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (TSUtilityAdditions)
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;	// IMP=0x006000000024b5e1
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x006000000024b57a
- (void)tsu_appendCharacter:(unsigned short)arg1;	// IMP=0x006000000024b55b
- (void)tsu_indentBy:(unsigned long long)arg1;	// IMP=0x0060000000270044
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(struct _NSRange)arg4;	// IMP=0x00600000002dcc95
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00600000002dcc67
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;	// IMP=0x00600000002dcba1
- (void)tc_replaceAllSubstr:(id)arg1 with:(id)arg2;	// IMP=0x00600000002dcb8c
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00600000002dca97
- (_Bool)tc_replaceSubstr:(id)arg1 with:(id)arg2;	// IMP=0x00600000002dca01
@end

