//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _KDNode : NSObject
{
    _Bool _isLeaf;	// 8 = 0x8
    float _splitValue;	// 12 = 0xc
    unsigned long long _splitDimension;	// 16 = 0x10
    unsigned long long _splitIndex;	// 24 = 0x18
    unsigned long long _startingIndex;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    _KDNode *_leftChild;	// 48 = 0x30
    _KDNode *_rightChild;	// 56 = 0x38
    struct _KDBoundingBox _boundingBox;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000017423b
- (id).cxx_construct;	// IMP=0x00000000001740ec
- (void).cxx_destruct;	// IMP=0x00000000001740b2
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(nonatomic) struct _KDBoundingBox boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) _KDNode *rightChild; // @synthesize rightChild=_rightChild;
@property(retain, nonatomic) _KDNode *leftChild; // @synthesize leftChild=_leftChild;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long startingIndex; // @synthesize startingIndex=_startingIndex;
@property(nonatomic) float splitValue; // @synthesize splitValue=_splitValue;
@property(nonatomic) unsigned long long splitIndex; // @synthesize splitIndex=_splitIndex;
@property(nonatomic) unsigned long long splitDimension; // @synthesize splitDimension=_splitDimension;
- (void)print;	// IMP=0x0000000000173f4e
- (void)assignSplitsForData:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;	// IMP=0x0000000000173cd8
- (void)partitionDataPoints:(const float *)arg1 indices:(unsigned long long *)arg2 numDimensions:(unsigned long long)arg3;	// IMP=0x0000000000173915
- (void)findMin:(float *)arg1 andMax:(float *)arg2 alongDimension:(unsigned long long)arg3 data:(const float *)arg4 indices:(const unsigned long long *)arg5 numDimensions:(unsigned long long)arg6;	// IMP=0x0000000000173859
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000173594
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000173320

@end

