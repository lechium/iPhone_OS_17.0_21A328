//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform17CRLWPTopicNumbers : NSObject
{
    MISSING_TYPE *storage;	// 8 = 0x8
    MISSING_TYPE *topicNumberData;	// 16 = 0x10
    MISSING_TYPE *invalidCharIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000ed9520
- (id)init;	// IMP=0x0010000000ed94c0
- (id)numberedListLabelForCharIndex:(long long)arg1 includeFormatting:(_Bool)arg2;	// IMP=0x0010000000ed84a0
- (unsigned long long)listNumberForCharIndex:(long long)arg1;	// IMP=0x0010000000ed8230
- (void)invalidateFromCharIndex:(long long)arg1;	// IMP=0x0010000000ed8120
- (id)initWithStorage:(id)arg1;	// IMP=0x0010000000ed7d20

@end
