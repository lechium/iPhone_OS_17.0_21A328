//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PFSinglePassVideoExportItem;

@interface SinglePassVideoTranscodingTask
{
    PFSinglePassVideoExportItem *_singlePassExportItem;	// 152 = 0x98
}

+ (_Bool)supportsDeduplication;	// IMP=0x004000000002005d
- (void).cxx_destruct;	// IMP=0x0020000000020bac
@property(retain) PFSinglePassVideoExportItem *singlePassExportItem; // @synthesize singlePassExportItem=_singlePassExportItem;
- (void)cancelTranscode;	// IMP=0x001000000002099e
- (double)currentFractionCompleted;	// IMP=0x0010000000020807
- (_Bool)hasProgress;	// IMP=0x00100000000207d4
- (void)performExport;	// IMP=0x0010000000020065

@end

