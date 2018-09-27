/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView {
    NTKRichComplicationRingView * _backgroundView;
    bool  _clockwise;
    double  _curveWidth;
    NTKRichComplicationRingView * _foregroundView;
}

@property (nonatomic) bool clockwise;

- (void).cxx_destruct;
- (bool)clockwise;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3;
- (void)setClockwise:(bool)arg1;

@end