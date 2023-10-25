//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray;
@protocol _SetOperable;

@protocol _SetOperable <NSObject>
+ (id)setWithArray:(NSArray *)arg1;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) long long count;
- (_Bool)containsObject:(id)arg1;
- (id)setByIntersectingSet:(id <_SetOperable>)arg1;
- (id)setBySubtractingSet:(id <_SetOperable>)arg1;
@end
