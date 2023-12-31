//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeGroupingResult.h"

@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult
{
    NSDictionary *_substrokePlacementsByStrokeIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001b4dd0
- (void).cxx_destruct;	// IMP=0x00000000001b4e00
@property(readonly, nonatomic) NSDictionary *substrokePlacementsByStrokeIdentifier; // @synthesize substrokePlacementsByStrokeIdentifier=_substrokePlacementsByStrokeIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b4b50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b4aa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b4910
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4;	// IMP=0x00000000001b4870

@end

