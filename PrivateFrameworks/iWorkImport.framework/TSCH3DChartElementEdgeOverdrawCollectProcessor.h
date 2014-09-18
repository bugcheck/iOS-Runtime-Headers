/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DChartElementEdgeOverdraw, TSCH3DResource, TSCH3DShaderEffects, TSCH3DShaderEffectsStates;

@interface TSCH3DChartElementEdgeOverdrawCollectProcessor : TSCH3DRetargetRenderProcessor <TSCHUnretainedParent> {
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    } mCurrentModelView;
    TSCH3DResource *mDiffuseTexcoords;
    TSCH3DShaderEffects *mEffects;
    TSCH3DShaderEffectsStates *mEffectsStates;
    TSCH3DResource *mNormals;
    TSCH3DChartElementEdgeOverdraw *mParent;
    TSCH3DResource *mVertices;
}

@property struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; } currentModelView;
@property(retain) TSCH3DResource * diffuseTexcoords;
@property(retain) TSCH3DResource * normals;
@property TSCH3DChartElementEdgeOverdraw * parent;
@property(retain) TSCH3DResource * vertices;

- (id).cxx_construct;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg3;
- (void)beginLineRendering;
- (void)clearParent;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })currentModelView;
- (void)dealloc;
- (id)diffuseTexcoords;
- (id)normals;
- (id)p_lineRenderSetting;
- (id)parent;
- (void)setCurrentModelView:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; })arg1;
- (void)setDiffuseTexcoords:(id)arg1;
- (void)setNormals:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setVertices:(id)arg1;
- (void)setupEdgeOverdrawRenderState;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;
- (long long)texture:(id)arg1 attributes:(const struct TextureAttributes { int x1; int x2; boolx3; boolx4; boolx5; long long x6; struct TextureSizeHint { int x_7_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; boolx8; }*)arg2;
- (id)vertices;

@end
