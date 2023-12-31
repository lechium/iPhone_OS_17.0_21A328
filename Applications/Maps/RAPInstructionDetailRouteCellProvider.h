//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Route, TransitDirectionsStepsListDataSource;

@interface RAPInstructionDetailRouteCellProvider : NSObject
{
    Route *_route;	// 8 = 0x8
    TransitDirectionsStepsListDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001e9099
- (void)_calculateLeadingInstructionMarginForTableView:(id)arg1;	// IMP=0x00100000001e903d
- (id)transitDirectionsCellForTableView:(id)arg1 item:(id)arg2;	// IMP=0x00100000001e8e77
- (id)directionStepCellForTableView:(id)arg1 step:(id)arg2;	// IMP=0x00100000001e8be9
- (void)registerCellsForTableView:(id)arg1;	// IMP=0x00100000001e8b07
- (id)initWithRoute:(id)arg1;	// IMP=0x00100000001e8a6f

@end

