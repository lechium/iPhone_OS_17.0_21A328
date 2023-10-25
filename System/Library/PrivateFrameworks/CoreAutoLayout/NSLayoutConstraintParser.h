//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface NSLayoutConstraintParser : NSObject
{
    NSString *_line;	// 8 = 0x8
    const char *_lineChars;	// 16 = 0x10
    unsigned long long _lineLength;	// 24 = 0x18
    unsigned long long _opts;	// 32 = 0x20
    _Bool _useHorizontalArrangement;	// 40 = 0x28
    NSDictionary *_metrics;	// 48 = 0x30
    NSDictionary *_views;	// 56 = 0x38
    id <NSLayoutItem> _containerView;	// 64 = 0x40
    NSMutableArray *_constraints;	// 72 = 0x48
    NSMutableArray *_unflushedWidthConstraints;	// 80 = 0x50
    NSMutableArray *_alignmentConstraints;	// 88 = 0x58
    unsigned long long _currentCharacter;	// 96 = 0x60
    NSMutableArray *_incompleteConstraints;	// 104 = 0x68
    id <NSLayoutItem> _parsedLeftView;	// 112 = 0x70
    id <NSLayoutItem> _parsedRightView;	// 120 = 0x78
    id <NSLayoutItem> _parsedConstrainedWidthView;	// 128 = 0x80
}

+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x006000000002c7ae
- (void)finishConstraint;	// IMP=0x000000000002d8a8
- (void)findContainerView;	// IMP=0x000000000002d858
- (struct _NSRange)rangeOfName;	// IMP=0x000000000002d7ea
- (void)parseOp;	// IMP=0x000000000002d69f
- (double)parseConstant;	// IMP=0x000000000002d4b9
- (void)parsePredicate;	// IMP=0x000000000002d3a5
- (void)parsePredicateList;	// IMP=0x000000000002d348
- (void)parsePredicateWithParentheses;	// IMP=0x000000000002d2a7
- (void)parseConnection;	// IMP=0x000000000002d169
- (void)flushWidthConstraints;	// IMP=0x000000000002d132
- (id)parseView;	// IMP=0x000000000002ced7
- (void)parse;	// IMP=0x000000000002cc34
- (void)failWithDescription:(id)arg1;	// IMP=0x000000000002cb6b
- (id)description;	// IMP=0x000000000002cb17
- (id)constraints;	// IMP=0x000000000002ca4d
- (void)dealloc;	// IMP=0x000000000002c9e0
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x000000000002c870

@end
