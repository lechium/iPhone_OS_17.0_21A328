//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/CRDirectionalRegion-Protocol.h>
#import <TextRecognition/CRIdentifiable-Protocol.h>

@class NSArray, NSObject;
@protocol CRLayoutLine;

@protocol CRLayoutBlockRegion <CRDirectionalRegion, CRIdentifiable>
@property(readonly) NSArray *layoutLines;
@property(readonly) _Bool canWrapToNextBlock;
- (void)removeLine:(NSObject<CRLayoutLine> *)arg1;
@end
