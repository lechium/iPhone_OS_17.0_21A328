//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLBezierPathBooleanOperationInputPathMap : NSObject
{
    struct unordered_map<long, long, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, long>>> _booleanSubpathIndexToInputBezierPathIndex;	// 8 = 0x8
    struct vector<std::pair<long, double>, std::allocator<std::pair<long, double>>> _points;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000000404f62
- (void).cxx_destruct;	// IMP=0x0010000000404f35
- (id)description;	// IMP=0x0010000000404e39
- (long long)inputPathIndexForOutputElementIndex:(long long)arg1 outInputT:(double *)arg2;	// IMP=0x0010000000404540
- (id)copyWithElementsInRange:(struct _NSRange)arg1;	// IMP=0x0010000000403ecd
@property(readonly, nonatomic) long long elementCount;

@end

