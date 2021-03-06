//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDResources, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject
{
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned int mDifferentialStyleIndex;
    _Bool mStopIfTrue;
    _Bool mAppliesToDateOnly;
    long mPriority;
    _Bool mAboveAverage;
    _Bool mBottom;
    _Bool mEqualAverage;
    _Bool mPercent;
    unsigned long mRank;
    long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;
- (void)setAppliesToDateOnly:(_Bool)arg1;
- (_Bool)appliesToDateOnly;
- (void)setTimePeriod:(int)arg1;
- (int)timePeriod;
- (void)setText:(id)arg1;
- (id)text;
- (void)setStdDev:(long)arg1;
- (long)stdDev;
- (void)setRank:(unsigned long)arg1;
- (unsigned long)rank;
- (void)setPercent:(_Bool)arg1;
- (_Bool)percent;
- (void)setEqualAverage:(_Bool)arg1;
- (_Bool)equalAverage;
- (void)setBottom:(_Bool)arg1;
- (_Bool)bottom;
- (void)setAboveAverage:(_Bool)arg1;
- (_Bool)aboveAverage;
- (void)setPriority:(long)arg1;
- (long)priority;
- (void)setStopIfTrue:(_Bool)arg1;
- (_Bool)stopIfTrue;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (id)formulaAtIndex:(unsigned int)arg1;
- (unsigned int)formulaCount;
- (void)setOperatorEnum:(int)arg1;
- (int)operatorEnum;
- (void)setType:(int)arg1;
- (int)type;
- (int)compareToOtherRuleUsingPriority:(id)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setDifferentialStyleIndex:(unsigned int)arg1;
- (unsigned int)differentialStyleIndex;

@end

