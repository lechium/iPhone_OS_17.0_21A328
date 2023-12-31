//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLPathSource, NSArray, NSNumber, NSString;

@protocol CRLShapeCollectionShape <NSObject>
@property(readonly, nonatomic) long long shapeType;
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *keywords;
- (unsigned long long)positionInCategoryWithID:(NSNumber *)arg1;
- (CRLPathSource *)pathSourceWithSize:(struct CGSize)arg1;
@end

